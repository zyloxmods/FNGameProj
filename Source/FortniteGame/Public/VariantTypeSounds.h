#pragma once
#include "CoreMinimal.h"
#include "SoundVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeSounds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UVariantTypeSounds : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundVariant> VariantSounds;
    
    UVariantTypeSounds();
};

