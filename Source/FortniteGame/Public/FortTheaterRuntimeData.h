#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortTheaterType.h"
#include "ESubGame.h"
#include "EventDependentTag.h"
#include "FortMissionAlertRuntimeData.h"
#include "FortMultiSizeBrush.h"
#include "FortRequirementsInfo.h"
#include "FortTheaterColorInfo.h"
#include "FortTheaterGameplayModifier.h"
#include "Templates/SubclassOf.h"
#include "FortTheaterRuntimeData.generated.h"

class AWorldMapPin;
class UTexture2D;

USTRUCT(BlueprintType)
struct FFortTheaterRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTheaterType TheaterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TheaterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventDependentTag> EventDependentTheaterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRequirementsInfo TheaterVisibilityRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRequirementsInfo Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGame RequiredSubGameForVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyMatchLinkedQuestsToTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldMapPin> WorldMapPinClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TheaterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush TheaterImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTheaterColorInfo TheaterColorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRequirementsInfo MissionAlertRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionAlertRuntimeData> MissionAlertCategoryRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTheaterGameplayModifier> GameplayModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HighestDifficulty;
    
    FORTNITEGAME_API FFortTheaterRuntimeData();
};

