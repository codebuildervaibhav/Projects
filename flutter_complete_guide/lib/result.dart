import 'package:flutter/material.dart';


// ignore: must_be_immutable
class Result extends StatelessWidget {
  final int resultScore;
  var  resetHandler;

  Result(this.resultScore, this.resetHandler);



  String get resultPhrase {
    var resultText = 'you did it';
    if (resultScore <= 8) {
      resultText = 'awesome';
    } else if (resultScore <= 16) {
      resultText = 'strange';
    } else {
      resultText = 'bad';
    }
    return resultText;
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        children: [
          Text(
            resultPhrase,
            style: TextStyle(fontSize: 36, fontWeight: FontWeight.bold),
            textAlign: TextAlign.center,
            
          ),
          TextButton(

           child:  Text('Restart Quiz!'
           ),
           style:ButtonStyle(foregroundColor: MaterialStateProperty.all(Colors.pink[200])) ,
                onPressed:  resetHandler   ,

           )
        ],
      ),
    );
  }
}

