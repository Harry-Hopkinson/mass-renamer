#include <src/args.hpp>

void print_usage() {
  std::cout << "Usage: mass-renamer [options]\n"
            << "Options:\n"
            << "  -h, --help               Show help messsage\n";
}

int args(int argc, char** argv) {
  // check if there are no args
  if (argc == 1) {
    print_usage();
    return 0;
  }
  for (int i = 1; i < argc; ++i) {
    std::string arg = argv[i];
    if (arg == "-h" || arg == "--help") {
      print_usage();
      return 0;
    }
    else if (arg == "-l" || arg == "--list") {
      OutputDir();
      return 0;
    }
    else {
      Logger::Error("Unknown argument: " + arg);
      print_usage();
      return 0;
    }
  }
  return 0;
}
