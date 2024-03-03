#pragma once
#include "CoreMinimal.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionIntRange.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionIntRange : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncrementValue;
    
    UPlaylistUserOptionIntRange();
};

