#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BuildingCategoryOptionData.h"
#include "BuildingOptionData.h"
#include "ChatOptionData.h"
#include "EmoteOptionData.h"
#include "ItemCategoryOptionData.h"
#include "MapNoteOptionData.h"
#include "RadialOptionData.h"
#include "FortPickerData.generated.h"

class UAthenaQuickChatBank;

UCLASS(Blueprintable, MinimalAPI)
class UFortPickerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingCategoryOptionData> BuildingCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingOptionData> WallOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingOptionData> FloorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingOptionData> StairOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingOptionData> RoofOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCategoryOptionData> TrapCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCategoryOptionData> WeaponCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadialOptionData> SocialCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatOptionData> ChatOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaQuickChatBank*> SquadChatOptionBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapNoteOptionData> MapNoteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteOptionData> EmoteOptions;
    
    UFortPickerData();
};

