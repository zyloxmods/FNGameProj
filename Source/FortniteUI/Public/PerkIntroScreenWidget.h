#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RoundTechDataCache.h"
#include "GameplayTagContainer.h"
#include "OnPerkIntroFinishedDelegate.h"
#include "PerkPipData.h"
#include "PerkIntroScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPerkIntroScreenWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerkIntroFinished OnPerkIntroFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkPipData> PreviousPerkPipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkPipData> NewPerkPipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkPipData> PerkPipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoundTechDataCache StartRoundCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPerkIntroScreenWidget();
    UFUNCTION(BlueprintCallable)
    void StartPerkScreenIntro();
    
    UFUNCTION(BlueprintCallable)
    void PerkIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void GatherPerkPipData();
    
};

