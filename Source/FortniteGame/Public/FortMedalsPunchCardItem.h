#pragma once
#include "CoreMinimal.h"
#include "CardSlotMedalData.h"
#include "FortAccountItem.h"
#include "FortMedalsPunchCardItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMedalsPunchCardItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> medal_punch_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCardSlotMedalData> MedalPunchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 days_since_season_start_grant;
    
public:
    UFortMedalsPunchCardItem();
};

