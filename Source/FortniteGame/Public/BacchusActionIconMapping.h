#pragma once
#include "CoreMinimal.h"
#include "BacchusActionIconMapping.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FBacchusActionIconMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Sprite;
    
    FORTNITEGAME_API FBacchusActionIconMapping();
};

