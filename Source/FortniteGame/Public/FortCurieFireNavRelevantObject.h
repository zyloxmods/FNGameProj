#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "FortCurieFireNavRelevantObject.generated.h"

UCLASS(Blueprintable)
class UFortCurieFireNavRelevantObject : public UObject, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UFortCurieFireNavRelevantObject();
    
    // Fix for true pure virtual functions not being implemented
};

