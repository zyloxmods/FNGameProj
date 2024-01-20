#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterAccessoryData.h"
#include "EFortCustomPartType.h"
#include "CustomCharacterFaceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UCustomCharacterFaceData : public UCustomCharacterAccessoryData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomPartType PartAttachedToOverride;
    
public:
    UCustomCharacterFaceData();
};

