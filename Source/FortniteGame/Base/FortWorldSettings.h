// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "Styling/SlateBrush.h"
#include "FortWorldSettings.generated.h"


UCLASS()
class FORTNITEGAME_API AFortWorldSettings : public AWorldSettings
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<int> WorldCells;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector WorldCellsOrigin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int WorldCellsFlags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bGenerateTestLevelSaves : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bDisableCullDistance : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D* TeamOnePvPMiniMapImage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D* TeamTwoPvPMiniMapImage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D PvPMapWorldCenter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PvPMapWorldWidth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PvPMapWorldHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bPvPUseWidgetRotation : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MapZOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator  MapRotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D* MapInitialMask;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bOverrideMainMapSettings : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bValidateNavGraphConnectivity : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bUseProceduralFoliage : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bUseConditionalBuildingFoundations : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
     FSlateBrush AthenaMapImage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MapWorldScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MiniMapZoom;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveTable* SearchSpeedOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveTable* ResourceRateOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bShowTimeOfDayManager : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<class AActor> WorldTimeOfDayManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TAssetPtr<class AActor> DefaultWorldTimeOfDayManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TAssetPtr<class AActor> ZoneThemeTimeOfDayManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TAssetPtr<class AActor> MissionTimeOfDayManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AFortTimeOfDayManager* TimeOfDayManager;

};
