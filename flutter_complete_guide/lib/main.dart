import 'package:flutter/material.dart';
import 'quiz.dart';
import 'result.dart';

 
void main() {
  runApp(MyApp());
}

//void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  State<StatefulWidget> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  final _questions = [
    {
      'questionText': 'What\'s your favourite color?',
      'answers': [
        {
          'text': 'black',
           'score': 10,
           },
        {
          'text': 'red ',
          'score': 5,
        },
        {
          'text': 'green ',
          'score': 2,
        },
        {
          'text': 'white ',
          'score': 10,
        }
      ],
    },
    {
      'questionText': 'What\'s your favourite animal ?',
      'answers': [
        {
          'text': 'rabbit',
           'score': 10,
           },
        {
          'text': 'Snake',
           'score': 2,
           },
        {
          'text': 'elephant',
           'score': 5,
           },
        {
          'text': 'Snake',
         'score': 7,
         },
      ],
    },
    {
      'questionText': 'Who\'s is your favouraite instructor?',
      'answers': [
        {
          'text': 'MAX',
           'score': 1,
        },
        {
          'text': 'MAX',
           'score': 1,
           },
        {
          'text': 'MAX',
           'score': 1,
           },
        {
          'text': 'MAX',
           'score': 1,
           },
      ],
    },
  ];

  int _questionIndex = 0;
  int _totalScore = 0;

  void  _resetQuiz()
   {
  
    setState(() {
  _questionIndex = 0;
    _totalScore = 0;
    });
  }

  void _answerQuestion(int score) {
     /*    if (_questionIndex == questions.length - 1) {
     //     _questionIndex = -1;
       }*/ 
     _totalScore += score;
     setState(() {
      // if (_questionIndex == 2)
      _questionIndex++;
    });

    print('printing');
    print(_questionIndex);
  }

  @override
  Widget build(BuildContext context) {
    // questions = [] ; 
    // this does not work when const is used

    /*var questions = [
      'What\'s animals do u like ?',
      'what\'s ypur favouraite animal ?'
    ];*/

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('Quiz Application'),
        ),
        body: _questionIndex < _questions.length
            ? Quiz(
                answerQuestion: _answerQuestion,
                questionIndex: _questionIndex,
                questions: _questions,
              )
            : Result(_totalScore, _resetQuiz),
      ),
    );
  }
}


