#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionListEntry.h"
#include "AthenaCollectionListEntryFishing.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionListEntryFishing : public UAthenaCollectionListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_IsDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_ItemSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_Has2Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_Has3Stars;
    
public:
    UAthenaCollectionListEntryFishing();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStarRatingSet(int32 StarRating);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNormalizedLengthSet(float NormalizedLength, float NormalizedMinLength, float NormalizedMaxLength);
    
};

