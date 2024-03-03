#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionValue.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionValueName;
    
    FORTNITEGAME_API FPlaylistOptionValue();
};

