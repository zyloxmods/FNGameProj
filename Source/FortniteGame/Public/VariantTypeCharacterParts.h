#pragma once
#include "CoreMinimal.h"
#include "VariantTypeBase.h"
#include "VariantTypeCharacterParts.generated.h"

class UCustomCharacterPart;

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeCharacterParts : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> VariantParts;
    
    UVariantTypeCharacterParts();
};

