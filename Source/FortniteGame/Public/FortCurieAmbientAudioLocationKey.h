#pragma once
#include "CoreMinimal.h"
#include "FortCurieAmbientAudioLocationKey.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieAmbientAudioLocationKey {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieAmbientAudioLocationKey();
};
FORCEINLINE uint32 GetTypeHash(const FFortCurieAmbientAudioLocationKey) { return 0; }

