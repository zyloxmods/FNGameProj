#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlaylistUserOptions.generated.h"

class UPlaylistUserOptionBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportNoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlaylistUserOptionBase*> Options;
    
    UPlaylistUserOptions();
};

