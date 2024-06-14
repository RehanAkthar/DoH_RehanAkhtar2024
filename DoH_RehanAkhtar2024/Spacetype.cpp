#include "Assessment.h"
#include "WelcomeWeek.h"
#include "Extracurricular.h"
#include "Bonus.h"
#include "Bogus.h"
#include "PlagiarismHearing.h"
#include "AccusedPlagiarism.h"
#include "SkipClasses.h"
#include "Spacetype.h"

//creates new subobjects of cSpace
CSpace* newSpace(ESpaceType spaces, istream& file)
{
    CSpace* squarePtr = nullptr;//creates a pointer to the CSquare class
    //dependant on the int value in the txt file the pointer will become a new object of the derived classes 
    switch (spaces)
    {
    case ESpaceType::Assessment:
    {
        //Runs the object constructor for Assessment 
        squarePtr = new CAssessment(file);// runs the object contructer
        break;
    }

    case ESpaceType::WelcomeWeek:
    {
        //Runs the object constructor for WelcomeWeek 
        squarePtr = new CWelcomeWeek(file);
        break;
    }

    case ESpaceType::ExtracurricularActivity:
    {
        squarePtr = new CExtracurricular(file);
        break;
    }

    case ESpaceType::Bonus:
    {
        squarePtr = new CBonus(file);
        break;
    }
    case ESpaceType::Bogus:
    {
        squarePtr = new CBogus(file);
        break;
    }
    case ESpaceType::PlagiarismHearing:
    {
        squarePtr = new CPlagiarismHearing(file);
        break;
    }
    case ESpaceType::AccusedofPlagiarism:
    {
        squarePtr = new CAccusedPlagiarism(file);
        break;
    }
    case ESpaceType::SkipClasses:
    {
        squarePtr = new CSkipClasses(file);
        break;
    }
    default:
    {
        // If the provided ESpacetype does not match any of the handled types, do nothing
        break;
    }
    return squarePtr;//returns the chosen object
    }
}