#pragma once
#include "CoreMinimal.h"
#include "PlaylistFilter.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPlaylistFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PlaylistsData;
    
    FORTNITEUI_API FPlaylistFilter();
};

