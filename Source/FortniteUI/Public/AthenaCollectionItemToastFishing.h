#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionItemToast.h"
#include "AthenaCollectionItemToastFishing.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionItemToastFishing : public UAthenaCollectionItemToast {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LengthFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderLengthFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_LeaderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_LeaderLength;
    
public:
    UAthenaCollectionItemToastFishing();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnlockedNewClue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStarRatingSet(int32 StarRating);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRankSet(int32 Rank, int32 NumEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNormalizedLengthSet(float NormalizedLength, float NormalizedMinLength, float NormalizedMaxLength);
    
};

