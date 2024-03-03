#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CameraToWinterQuestViewState.h"
#include "FortEventLevelData.h"
#include "Templates/SubclassOf.h"
#include "WinterQuestData.generated.h"

class UCommonActivatableWidget;
class UEnableMultiFactorModal;
class UFortChallengeBundleScheduleDefinition;
class UFortGiftingScreen;
class UFortStoreFrontOfferDetailsWidgetBase;
class UFortWinterQuestDetailsScreen;
class UFortWinterQuestNewChallengeModal;

UCLASS(Blueprintable)
class UWinterQuestData : public UFortEventLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWinterQuestDetailsScreen> DetailsScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGiftingScreen> GiftingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortStoreFrontOfferDetailsWidgetBase> PurchaseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWinterQuestNewChallengeModal> NewChallengeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> WinterfestInfoModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinterfestYear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortChallengeBundleScheduleDefinition> WinterfestChallengeSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WinterQuestItemTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WinterQuestKeyTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinterQuestIntroTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinterQuestFirePlaceFadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraToWinterQuestViewState> CameraTagsToViewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultCamera;
    
    UWinterQuestData();
};

