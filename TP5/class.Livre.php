<?php

error_reporting(E_ALL);

/**
 * untitledModel - class.Livre.php
 *
 * $Id$
 *
 * This file is part of untitledModel.
 *
 * Automatically generated on 20.12.2019, 21:00:15 with ArgoUML PHP module 
 * (last revised $Date: 2010-01-12 20:14:42 +0100 (Tue, 12 Jan 2010) $)
 *
 * @author firstname and lastname of author, <author@example.org>
 */

if (0 > version_compare(PHP_VERSION, '5')) {
    die('This file was generated for PHP 5');
}

/**
 * include Adherent
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Adherent.php');

/**
 * include Journal
 *
 * @author firstname and lastname of author, <author@example.org>
 */
require_once('class.Journal.php');

/* user defined includes */
// section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:0000000000000867-includes begin
// section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:0000000000000867-includes end

/* user defined constants */
// section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:0000000000000867-constants begin
// section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:0000000000000867-constants end

/**
 * Short description of class Livre
 *
 * @access public
 * @author firstname and lastname of author, <author@example.org>
 */
class Livre
    extends Journal
{
    // --- ASSOCIATIONS ---
    // generateAssociationEnd : 1

    // --- ATTRIBUTES ---

    /**
     * Short description of attribute disponible
     *
     * @access public
     * @var Boolean
     */
    public $disponible = null;

    // --- OPERATIONS ---

    /**
     * Short description of method empruntable
     *
     * @access public
     * @author firstname and lastname of author, <author@example.org>
     * @return mixed
     */
    public function empruntable()
    {
        // section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:00000000000008C2 begin
        // section -87--2--113--45-3b91b15b:16f24cb09c3:-8000:00000000000008C2 end
    }

} /* end of class Livre */

?>