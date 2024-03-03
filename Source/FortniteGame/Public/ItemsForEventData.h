#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventHotfixForPlaylistData.h"
#include "EventItemNamedWeight.h"
#include "ItemsForEventData.generated.h"

USTRUCT(BlueprintType)
struct FItemsForEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventItemNamedWeight EventItemNamedWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> ItemsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GlobalTableHotfixSyntax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventHotfixForPlaylistData> PlaylistTableHotfixSyntax;
    
    FORTNITEGAME_API FItemsForEventData();
};

