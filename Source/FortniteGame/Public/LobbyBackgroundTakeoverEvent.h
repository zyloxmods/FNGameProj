#pragma once
#include "CoreMinimal.h"
#include "FortEventItemDefinitionBase.h"
#include "LobbyBackgroundTakeoverEvent.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ULobbyBackgroundTakeoverEvent : public UFortEventItemDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> StwLobbyBackgroundLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> AthenaLobbyBackgroundLevelName;
    
    ULobbyBackgroundTakeoverEvent(const FObjectInitializer& ObjectInitializer);
};

