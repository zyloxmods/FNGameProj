#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionPrimaryAsset.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionPrimaryAsset : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionPrimaryAsset();
};

