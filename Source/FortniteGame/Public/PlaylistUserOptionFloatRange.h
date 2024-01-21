#pragma once
#include "CoreMinimal.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionFloatRange.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionFloatRange : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncrementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnitName;
    
    UPlaylistUserOptionFloatRange();
};

