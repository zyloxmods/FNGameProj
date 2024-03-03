#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EventHotfixForPlaylistData.generated.h"

USTRUCT(BlueprintType)
struct FEventHotfixForPlaylistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlaylistTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TableHotfixSyntax;
    
    FORTNITEGAME_API FEventHotfixForPlaylistData();
};

