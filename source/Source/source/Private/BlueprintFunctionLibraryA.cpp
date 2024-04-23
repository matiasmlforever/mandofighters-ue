// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryA.h"

FString UBlueprintFunctionLibraryA::GetPointLessMessage()
 {
	return FString(TEXT("this is a message, but it's rather pointless"));
 }

double UBlueprintFunctionLibraryA::GetMyShit()
{
	return ShitValue;
}

FPromedios UBlueprintFunctionLibraryA::CalcularPromedios(const TArray<int32>& InValues)
{
	//fixing the output but based in the incoming values
	FPromedios ReturnedValue = FPromedios(static_cast<float>(InValues[0]),static_cast<float>(InValues[1]),static_cast<float>(InValues[2]));
	return ReturnedValue;
}
