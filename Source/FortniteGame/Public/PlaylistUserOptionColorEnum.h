#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionColorValue.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionColorEnum.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionColorEnum : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionColorValue> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionColorEnum();
};

