#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Entity.generated.h"

class ULevel;

UCLASS(Blueprintable)
class ENTITYCORE_API UEntity : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* Level;
    
public:
    UEntity();
};

