#pragma once
#include "CoreMinimal.h"
#include "AthenaCollectionLeaderboardEntry.h"
#include "AthenaCollectionLeaderboardEntryFishing.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionLeaderboardEntryFishing : public UAthenaCollectionLeaderboardEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_Has2Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName_Has3Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Stars;
    
public:
    UAthenaCollectionLeaderboardEntryFishing();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStarRatingSet(int32 StarRating);
    
};

