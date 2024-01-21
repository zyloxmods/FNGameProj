#pragma once
#include "CoreMinimal.h"
#include "PlaylistOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegionsDisabled;
    
    FORTNITEGAME_API FPlaylistOverrideData();
};

