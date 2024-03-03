#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EAppStore.h"
#include "PlayerLastSelectedPreferredProvider.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLastSelectedPreferredProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl LocalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppStore PreferredProvider;
    
    FORTNITEGAME_API FPlayerLastSelectedPreferredProvider();
};

