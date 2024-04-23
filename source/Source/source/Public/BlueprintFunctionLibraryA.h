// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctionLibraryA.generated.h"


USTRUCT(BlueprintType)
struct FPromedios
{
	FPromedios():
		Media(0.0f),
		Mediana(0.0f),
		Moda(0.0f)
	{
	};

	FPromedios(float InMedia, float InMediana, float InModa):
		Media(InMedia),
		Mediana(InMediana),
		Moda(InModa)
	{
	};


	UPROPERTY(BlueprintReadOnly)
	float Media = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	float Moda = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	float Mediana = 0.0f;

	GENERATED_BODY()
};


/**
 * 
 */
UCLASS()
class SOURCE_API UBlueprintFunctionLibraryA : public UBlueprintFunctionLibrary
{
public:
	UFUNCTION(BlueprintCallable) //so that blueprints can use the followin function
	static FString GetPointLessMessage();

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (Tooltip = "3.1234523123",
		CompactNodeTitle="KK"))
	static double GetMyShit();

	UFUNCTION(BlueprintCallable, meta=(Tooltip="Calcula la media, moda y mediana de un arreglo de enteros"))
	static FPromedios CalcularPromedios(const TArray<int32>& InValues);

protected:

private:
	static constexpr double ShitValue = 3.1234523123;

	GENERATED_BODY()
};
