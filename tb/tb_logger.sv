integer fd;
string  csv_path;

task automatic csv_open(input string path, input string header);
  csv_path = path;
  fd = $fopen(path, "w");
  if (fd == 0) $fatal("[TB] Could not open %s", path);
  $fwrite(fd, "%s\n", header);
endtask

task automatic csv_row(input string row);
  if (fd != 0) $fwrite(fd, "%s\n", row);
endtask

task automatic csv_close();
  if (fd != 0) begin
    $fclose(fd);
    fd = 0;
  end
endtask