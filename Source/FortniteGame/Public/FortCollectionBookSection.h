#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCollectionBookSection.generated.h"

class UFortCollectionBookPage;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCollectionBookSection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SectionDataRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPage* OwningPage;
    
public:
    UFortCollectionBookSection();
};

