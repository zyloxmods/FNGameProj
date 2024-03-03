#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionCollisionProfileValue.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistOptionCollisionProfileValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName Value;
    
    FORTNITEGAME_API FPlaylistOptionCollisionProfileValue();
};

