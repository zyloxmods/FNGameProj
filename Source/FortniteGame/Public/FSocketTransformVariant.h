// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FSocketTransformVariant.generated.h"


USTRUCT()
struct FSocketTransformVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName SourceSocketName;

	UPROPERTY(EditAnywhere)
		FName                                       OverridSocketName;
	/*
	UPROPERTY(EditAnywhere)
		unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET

	UPROPERTY(EditAnywhere)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.SocketTransformVariant.SourceObjectToModify
	*/
};