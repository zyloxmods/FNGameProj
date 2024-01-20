#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelDuplicatable.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API ULevelDuplicatable : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ILevelDuplicatable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostFinishDuplication(UObject* SourceObject);
    
};

