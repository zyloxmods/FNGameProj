#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelDuplicatable.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class ULevelDuplicatable : public UInterface {
    GENERATED_BODY()
};

class ILevelDuplicatable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostFinishDuplication(UObject* SourceObject);
    
};

