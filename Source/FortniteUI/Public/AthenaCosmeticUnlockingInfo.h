#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "AthenaCosmeticUnlockingInfo.generated.h"

class UAthenaCosmeticItemDefinition;
class UCommonRichTextBlock;
class UFortItemDefinition;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCosmeticUnlockingInfo : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_StaticUnlockingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_UnlockingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_StepsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ProgressCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmphasisStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgressCompletionNumericStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CosmeticItemDef;
    
public:
    UAthenaCosmeticUnlockingInfo();
    UFUNCTION(BlueprintCallable)
    void ShowUnlockingInfoForCosmeticVariant(UAthenaCosmeticItemDefinition* InCosmeticItemDef, const FGameplayTag& InVariantChannel, const FGameplayTag& InVariant);
    
    UFUNCTION(BlueprintCallable)
    void ShowUnlockingInfoForCosmetic(UAthenaCosmeticItemDefinition* InCosmeticItemDef);
    
    UFUNCTION(BlueprintCallable)
    void ShowUnlockingInfo(UAthenaCosmeticItemDefinition* UnlockItem, UFortItemDefinition* UnlockSource);
    
    UFUNCTION(BlueprintCallable)
    void ShowSeasonUnlockingInfo(int32 SeasonNumber, int32 TierNumber);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOutroAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestIntroAnim();
    
    UFUNCTION(BlueprintCallable)
    void OutroAnimFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockingInfoSet(bool bShowProgression);
    
    UFUNCTION(BlueprintCallable)
    void HideUnlockingInfo();
    
};

