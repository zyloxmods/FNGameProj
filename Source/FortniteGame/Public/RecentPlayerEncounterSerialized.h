#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "RecentPlayerEncounter.h"
#include "RecentPlayerEncounterSerialized.generated.h"

USTRUCT(BlueprintType)
struct FRecentPlayerEncounterSerialized : public FRecentPlayerEncounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl LocalUserId;
    
    FORTNITEGAME_API FRecentPlayerEncounterSerialized();
};

