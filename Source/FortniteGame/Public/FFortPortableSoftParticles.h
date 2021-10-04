// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFXType.h"
#include "FFortPortableSoftParticles.generated.h"


USTRUCT()
struct FFortPortableSoftParticles
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		EFXType  FXType;
/*
                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.FortPortableSoftParticles.NiagaraVersion
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.FortPortableSoftParticles.CascadeVersion*/
};
