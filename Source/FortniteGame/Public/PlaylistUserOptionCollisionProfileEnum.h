#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionCollisionProfileValue.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionCollisionProfileEnum.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionCollisionProfileEnum : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionCollisionProfileValue> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionCollisionProfileEnum();
};

