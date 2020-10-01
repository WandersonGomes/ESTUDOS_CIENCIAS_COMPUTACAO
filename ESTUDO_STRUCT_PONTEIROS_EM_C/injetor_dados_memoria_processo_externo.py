maps_file = open("/proc/15637/mem", 'rb+')
start = int("0x7ffefe7385c0", 16)
maps_file.seek(start)
maps_file.write(bytes("\0\0\0\0", "ASCII")) #000001 0000 0000 000