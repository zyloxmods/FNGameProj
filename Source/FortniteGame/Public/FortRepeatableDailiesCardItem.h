#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortRepeatableDailiesCardItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortRepeatableDailiesCardItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 days_since_season_start_grant;
    
public:
    UFortRepeatableDailiesCardItem();
};

