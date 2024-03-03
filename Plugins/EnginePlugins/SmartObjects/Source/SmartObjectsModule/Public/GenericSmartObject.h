#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RichSmartObjectInterface.h"
#include "GenericSmartObject.generated.h"

class USmartObjectComponent;

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API AGenericSmartObject : public AActor, public IRichSmartObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    USmartObjectComponent* SOComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReferenceActors;
    
public:
    AGenericSmartObject();
    
    // Fix for true pure virtual functions not being implemented
};

