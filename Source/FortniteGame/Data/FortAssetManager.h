// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "GameData/FortGameData.h"
#include "GameData/GameDataCosmetics.h"
#include "FortAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TMap<UObject*, FName> GCPreventionPool; // 0x478(0x50)

	UPROPERTY(EditAnywhere)
	TArray<FName> DefaultBundleState; // 0x4d8(0x10)

	UPROPERTY(EditAnywhere)
	TArray<FName> PlatformBundleState; // 0x4e8(0x10)

	//UPROPERTY(EditAnywhere)
	//UFortReleaseVersionManager* FortReleaseVersionManager; // 0x4f8(0x08)

	UPROPERTY(EditAnywhere)
	UFortGameData* GameDataCommon; // 0x550(0x08)

	UPROPERTY(EditAnywhere)
	FString GameDataNameCommon; // 0x558(0x10)

	UPROPERTY(EditAnywhere)
	UGameDataCosmetics* GameDataCosmetics; // 0x568(0x08)

	UPROPERTY(EditAnywhere)
	FString GameDataNameCosmetics; // 0x570(0x10)

	//UPROPERTY(EditAnywhere)
	//UGameDataBR* GameDataBR; // 0x580(0x08)

	UPROPERTY(EditAnywhere)
	FString GameDataNameBR; // 0x588(0x10)

//	UPROPERTY(EditAnywhere)
	//UGameDataSTW* GameDataSTW; // 0x598(0x08)

	UPROPERTY(EditAnywhere)
	FString FastCookTheaterPath; // 0x5a0(0x10)

	UPROPERTY(EditAnywhere)
	FString PerfMemTheaterPath; // 0x5b0(0x10)

	UPROPERTY(EditAnywhere)
	FString BROnlyTheaterPath; // 0x5c0(0x10)

	UPROPERTY(EditAnywhere)
	FString ActiveTheaterListPath; // 0x5d0(0x10)

	UPROPERTY(EditAnywhere)
	FString DanceRoyaleMapPath; // 0x5e0(0x10)
};
