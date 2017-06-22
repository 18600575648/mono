#include <config.h>
#include <glib.h>

#include "File-c-api.h"
#include "w32file.h"

gboolean
mono_w32file_close (gpointer handle)
{
	return FALSE;
}

gboolean
mono_w32file_copy (gunichar2 *path, gunichar2 *dest, gboolean overwrite, gint32 *error)
{
	return FALSE;
}

void
mono_w32file_cleanup (void)
{

}

gpointer
mono_w32file_create(const gunichar2 *name, guint32 fileaccess, guint32 sharemode, guint32 createmode, guint32 attrs)
{
	return NULL;
}

gboolean
mono_w32file_create_directory (const gunichar2 *name)\
{
	return FALSE;
}

gboolean
mono_w32file_create_pipe (gpointer *readpipe, gpointer *writepipe, guint32 size)
{
	return FALSE;
}

gboolean
mono_w32file_delete (const gunichar2 *name)
{
	return FALSE;
}

gboolean
mono_w32file_find_close (gpointer handle)
{
	return FALSE;
}

gpointer
mono_w32file_find_first (const gunichar2 *pattern, WIN32_FIND_DATA *find_data)
{
	return NULL;
}

gboolean
mono_w32file_find_next (gpointer handle, WIN32_FIND_DATA *find_data)
{
	return FALSE;
}

gboolean
mono_w32file_flush (gpointer handle)
{
     return FALSE;
}

gboolean
mono_w32file_set_attributes (const gunichar2 *name, guint32 attrs)
{
	return FALSE;
}

gboolean
mono_w32file_get_attributes_ex (const gunichar2 *name, MonoIOStat *stat)
{
	return FALSE;
}

guint32
mono_w32file_get_attributes (const gunichar2 *name)
{
	return 99999;
}

gboolean
mono_w32file_get_volume_information (const gunichar2 *path, gunichar2 *volumename, gint volumesize, gint *outserial, gint *maxcomp, gint *fsflags, gunichar2 *fsbuffer, gint fsbuffersize)
{
	return FALSE;
}



gpointer
mono_w32file_get_console_error (void)
{
	return NULL;
}

gpointer
mono_w32file_get_console_input (void)
{
	return NULL;
}

gpointer
mono_w32file_get_console_output (void)
{
    return NULL;
}

guint32
mono_w32file_get_cwd (guint32 length, gunichar2 *buffer)
{
	return 999999;
}

gboolean
mono_w32file_get_disk_free_space (const gunichar2 *path_name, guint64 *free_bytes_avail, guint64 *total_number_of_bytes, guint64 *total_number_of_free_bytes)
{
	return FALSE;
}

guint32
mono_w32file_get_drive_type (const gunichar2 *root_path_name)
{
	return 99999;
}

gint64
mono_w32file_get_file_size (gpointer handle, gint32 *error)
{
	return -999999;
}

gint32
mono_w32file_get_logical_drive (guint32 len, gunichar2 *buf)
{
	return 99999;
}

gint
mono_w32file_get_type (gpointer handle)
{
	return -999999;
}

gboolean
mono_w32file_write (gpointer handle, gconstpointer buffer, guint32 numbytes, guint32 *byteswritten)
{
	return FALSE;
}

gboolean
mono_w32file_truncate (gpointer handle)
{
	return FALSE;
}

gboolean
mono_w32file_unlock (gpointer handle, gint64 position, gint64 length, gint32 *error)
{
	return FALSE;
}

gboolean
mono_w32file_lock (gpointer handle, gint64 position, gint64 length, gint32 *error)
{
	return FALSE;
}

gboolean
mono_w32file_set_times (gpointer handle, const FILETIME *create_time, const FILETIME *access_time, const FILETIME *write_time)
{
	return FALSE;
}

gboolean
mono_w32file_move (gunichar2 *path, gunichar2 *dest, gint32 *error)
{
	return FALSE;
}

gboolean
mono_w32file_read (gpointer handle, gpointer buffer, guint32 numbytes, guint32 *bytesread)
{
	return FALSE;
}

gboolean
mono_w32file_remove_directory (const gunichar2 *name)
{
	return FALSE;
}

void
mono_w32file_init (void)
{

}

gboolean
mono_w32file_replace (gunichar2 *destinationFileName, gunichar2 *sourceFileName, gunichar2 *destinationBackupFileName, guint32 flags, gint32 *error)
{
	return FALSE;
}

guint32
mono_w32file_seek (gpointer handle, gint32 movedistance, gint32 *highmovedistance, guint32 method)
{
	return 999999;
}


gboolean
mono_w32file_set_cwd (const gunichar2 *path)
{
	return FALSE;
}
