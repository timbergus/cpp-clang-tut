// Simple console outputs.

inline void show_string () {
  cout << "Hello, world!" << endl;
  cout << "Hello, programming!" << endl;
  cout << "Here we go!" << endl;
}

// Data type examples: int, double, char, string, bool.

inline void define_types () {

  int age = 36;
  double value = sqrt(age);
  char initial = 'G';
  string result;
  bool married = false;

  cout << initial << value << " : Write your name!" << endl;
  result = keep_window_open();
  cout << "Hello " << result << "!" << endl;
  cout << isMarried(married) << "married!" << endl;
}

// Read from console.

inline void search_repeated_words () {

  string previous;
  string current;

  while (current != "exit") {
    cin >> current;
    if (previous == current) {
      cout << "repeated word: " << current << endl;
    }
    previous = current;
  }
}

// Counting words.

inline void count_words () {

  int number_of_words = 0;
  string previous_ex2;
  string current_ex2;

  while (current_ex2 != "exit") {
    cin >> current_ex2;
    ++number_of_words;
    if (previous_ex2 == current_ex2) {
      cout << "Words number: " << number_of_words << ". Repeated word: " << current_ex2 << endl;
    }
    previous_ex2 = current_ex2;
  }
}

inline void errors_check () {
  int i = 0;
  while (i < 100) {
    cout << i << "\t" << pow(i, 2) << endl;
    ++i;
  }
}

inline void working_with_vectors () {

  vector<int> v {0, 1, 2, 3, 4, 5, 6};

  cout << v[3] << endl;
}
