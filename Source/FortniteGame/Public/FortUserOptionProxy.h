#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreativeEditablePropertyInterface.h"
#include "FortUserOptionProvider.h"
#include "FortUserOptionProxy.generated.h"

class UPlaylistUserOptionBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUserOptionProxy : public UObject, public IFortUserOptionProvider, public ICreativeEditablePropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlaylistUserOptionBase* ItemOption;
    
    UFortUserOptionProxy();
    
    // Fix for true pure virtual functions not being implemented
};

