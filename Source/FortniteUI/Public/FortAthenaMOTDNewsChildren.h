#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AthenaNewsEntry.h"
#include "FortAthenaMOTDNewsChildren.generated.h"

UINTERFACE(Blueprintable)
class UFortAthenaMOTDNewsChildren : public UInterface {
    GENERATED_BODY()
};

class IFortAthenaMOTDNewsChildren : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateNews(const FAthenaNewsEntry& NewsEntry);
    
};

