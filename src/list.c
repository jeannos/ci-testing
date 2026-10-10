/* Lists the entries of an archive: a toy that needs a library, as the real project does. */
#include <archive.h>
#include <archive_entry.h>
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s ARCHIVE\n", argv[0]);
        return 2;
    }
    struct archive *a = archive_read_new();
    archive_read_support_filter_all(a);
    archive_read_support_format_all(a);
    if (archive_read_open_filename(a, argv[1], 65536) != ARCHIVE_OK) {
        fprintf(stderr, "%s\n", archive_error_string(a));
        archive_read_free(a);
        return 1;
    }
    struct archive_entry *entry;
    while (archive_read_next_header(a, &entry) == ARCHIVE_OK)
        puts(archive_entry_pathname(entry));
    archive_read_free(a);
    return 0;
}
